@interface CSJDynamicAbstractDecorator : NSObject
@property (nonatomic) CSJDynamicAbstractView dynamicAbstractView;
@property (nonatomic) NSString brickType;
@property (nonatomic) BOOL needUsePadding;
- (id)brickType;
- (id)dynamicAbstractView;
- (id)handleFilterWithInputImage:;
- (BOOL)needUsePadding;
- (void)setBrickType:;
- (void)setDynamicAbstractView:;
- (void)setNeedUsePadding:;
- (id)subComponentFrame;
- (void)updateWithOriginShow:destShow:;
- (void)willRender;
- (id)init;
- (void).cxx_destruct;
- (void)render;
- (void)updateTheme;
- (void)didRender;
@end
