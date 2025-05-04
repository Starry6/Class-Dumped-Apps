@interface AWESearchVideoGameModel : AWEBaseApiModel
@property (nonatomic) NSString displayStr;
@property (nonatomic) AWESearchVideoGameDisplayModel displayInfo;
@property (nonatomic) NSString alasrc;
@property (nonatomic) NSNumber aladdinID;
@property (nonatomic) AWESearchVideoGameAttachedModel attachedInfo;
- (id)aladdinID;
- (void)setAladdinID:;
- (id)displayStr;
- (void)setDisplayStr:;
- (void)setAttachedInfo:;
- (id)attachedInfo;
- (id)alasrc;
- (void)setAlasrc:;
- (void).cxx_destruct;
- (void)setDisplayInfo:;
- (id)displayInfo;
+ (id)attachedInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
