@interface AWEUGCountDownViewFinishConfig : NSObject
@property (nonatomic) q resourceType;
@property (nonatomic) NSString iconImageUrl;
@property (nonatomic) NSString iconLottieUrl;
@property (nonatomic) NSString iconLottieMD5;
@property (nonatomic) q lottiePlayType;
@property (nonatomic) NSString closeImageUrl;
@property (nonatomic) BOOL hasFeedBack;
@property (nonatomic) NSString labelText;
@property (nonatomic) NSString schema;
@property (nonatomic) Q schemaJumpType;
@property (nonatomic) NSArray feedBackSchemaList;
@property (nonatomic) BOOL unDismissWithoutFBSchema;
- (id)iconImageUrl;
- (void)setIconImageUrl:;
- (unsigned long long)schemaJumpType;
- (void)setSchemaJumpType:;
- (long long)lottiePlayType;
- (void)setLottiePlayType:;
- (void)setHasFeedBack:;
- (void)setFeedBackSchemaList:;
- (void)setIconLottieUrl:;
- (void)setIconLottieMD5:;
- (void)setCloseImageUrl:;
- (void)setUnDismissWithoutFBSchema:;
- (id)iconLottieUrl;
- (id)iconLottieMD5;
- (id)closeImageUrl;
- (BOOL)hasFeedBack;
- (id)feedBackSchemaList;
- (BOOL)unDismissWithoutFBSchema;
- (id)schema;
- (id)labelText;
- (long long)resourceType;
- (void)setResourceType:;
- (void)setSchema:;
- (void)setLabelText:;
- (void).cxx_destruct;
@end
