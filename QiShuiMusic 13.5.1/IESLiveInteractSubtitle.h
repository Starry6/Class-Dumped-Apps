@interface IESLiveInteractSubtitle : NSObject
@property (nonatomic) NSString userId;
@property (nonatomic) NSString text;
@property (nonatomic) q sequence;
@property (nonatomic) BOOL definite;
- (BOOL)definite;
- (void)setDefinite:;
- (id)toDictionary;
- (void)setSequence:;
- (id)userId;
- (void)setText:;
- (void).cxx_destruct;
- (void)setUserId:;
- (long long)sequence;
- (id)text;
@end
