@interface CSJDynamicSDKCustomComponentManager : NSObject
@property (nonatomic) NSArray rendererComponents;
- (id)fillCustomData:;
- (id)generateCustomComponent:;
- (id)initWithRendererCustomComponents:;
- (id)rendererComponents;
- (void)setRendererComponents:;
- (void).cxx_destruct;
@end
