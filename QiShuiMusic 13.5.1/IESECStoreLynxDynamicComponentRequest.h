@interface IESECStoreLynxDynamicComponentRequest : NSObject
@property (nonatomic) NSString urlString;
@property (nonatomic) NSMutableArray callbacks;
- (id)initWithUrlString:;
- (id)urlString;
- (void)setCallbacks:;
- (id)callbacks;
- (void).cxx_destruct;
- (void)setUrlString:;
@end
