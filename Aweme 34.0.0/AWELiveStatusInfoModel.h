@interface AWELiveStatusInfoModel : NSObject
@property (nonatomic) NSString userID;
@property (nonatomic) NSString profileURL;
@property (nonatomic) NSMutableAttributedString originalString;
@property (nonatomic) NSMutableAttributedString completeString;
- (id)profileURL;
- (void)setProfileURL:;
- (id)userID;
- (void)encodeWithCoder:;
- (id)originalString;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setUserID:;
- (void)setOriginalString:;
- (id)completeString;
- (void)setCompleteString:;
@end
