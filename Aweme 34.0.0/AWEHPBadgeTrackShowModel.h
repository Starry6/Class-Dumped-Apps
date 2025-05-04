@interface AWEHPBadgeTrackShowModel : AWEHPBadgeTrackBaseModel
@property (nonatomic) NSString tabID;
@property (nonatomic) Q dotType;
@property (nonatomic) NSString componentID;
@property (nonatomic) NSString bizID;
@property (nonatomic) NSString dotText;
@property (nonatomic) q dotNumber;
@property (nonatomic) q downgradedType;
@property (nonatomic) NSDictionary bizTrackParams;
- (void)setBizID:;
- (void)setTabID:;
- (id)dotText;
- (void)setDotText:;
- (long long)downgradedType;
- (void)setDowngradedType:;
- (id)bizTrackParams;
- (void)setBizTrackParams:;
- (unsigned long long)dotType;
- (void)setDotType:;
- (long long)dotNumber;
- (void)setDotNumber:;
- (void).cxx_destruct;
- (void)setComponentID:;
- (id)componentID;
- (id)bizID;
- (id)tabID;
@end
