@interface AWEUndertakeFilterPlayAwemeFinishCondition : AWEUndertakeFilterBaseCondition
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onPlayAwemeFinish;
- (long long)statusWithData:extraInfo:;
- (id)init;
- (void)dealloc;
@end
