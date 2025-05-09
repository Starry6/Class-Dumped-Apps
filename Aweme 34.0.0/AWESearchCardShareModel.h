@interface AWESearchCardShareModel : NSObject
@property (nonatomic) BOOL hidden;
@property (nonatomic) q shareCount;
@property (nonatomic) NSString groupID;
@property (nonatomic) NSString userID;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString adEventName;
@property (nonatomic) NSDictionary interactLogExtra;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} shareButtonFrame;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)referString;
- (void)setReferString:;
- (id)adEventName;
- (void)setAdEventName:;
- (id)interactLogExtra;
- (void)setInteractLogExtra:;
- (id)shareButtonFrame;
- (void)setShareButtonFrame:;
- (void)setGroupID:;
- (id)userID;
- (id)init;
- (id)groupID;
- (void)setHidden:;
- (void).cxx_destruct;
- (BOOL)hidden;
- (void)setUserID:;
- (void)setShareCount:;
- (long long)shareCount;
@end
