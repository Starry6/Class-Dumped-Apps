@interface ICLiveLinkPlaybackEvent : NSObject
@property (nonatomic) q kind;
- (long long)kind;
- (id)description;
- (id)initWithKind:;
@end
