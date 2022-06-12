//
//  Renderer.h
//  2dGameEngine
//
//  Created by Ronald Cho on 2022/06/12.
//

#import <MetalKit/MetalKit.h>


// Our platform independent renderer class.   Implements the MTKViewDelegate protocol which
//   allows it to accept per-frame update and drawable resize callbacks.
@interface Renderer : NSObject <MTKViewDelegate>

-(nonnull instancetype)initWithMetalKitView:(nonnull MTKView *)view;

@end

