@interface IESLivePKRivalsModel : NSObject
@property (nonatomic) RivalsRecommendResponse_GroupRivals groupRivals;
@property (nonatomic) BOOL hasReceived;
@property (nonatomic) BOOL hasShown;
- (void)setGroupRivals:;
- (id)groupRivals;
- (BOOL)hasReceived;
- (void)setHasReceived:;
- (void).cxx_destruct;
- (void)setHasShown:;
- (BOOL)hasShown;
@end
