@interface HTSInteractStreamRegion : MTLModel
@property (nonatomic) NSNumber w;
@property (nonatomic) NSNumber h;
@property (nonatomic) NSNumber x;
@property (nonatomic) NSNumber y;
@property (nonatomic) NSNumber userid;
@property (nonatomic) NSNumber type;
@property (nonatomic) NSNumber status;
@property (nonatomic) NSNumber talk;
@property (nonatomic) NSNumber uid;
@property (nonatomic) NSNumber muteAudio;
@property (nonatomic) NSString strUID;
@property (nonatomic) NSNumber p;
@property (nonatomic) NSNumber loading;
@property (nonatomic) NSNumber visible;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)muteAudio;
- (void)setMuteAudio:;
- (void)setStrUID:;
- (void)setTalk:;
- (id)strUID;
- (id)talk;
- (id)h;
- (void)setLoading:;
- (id)w;
- (void)setStatus:;
- (id)visible;
- (void)setVisible:;
- (void)setX:;
- (id)uid;
- (void)setY:;
- (id)y;
- (void)setUid:;
- (void)setType:;
- (id)loading;
- (id)x;
- (id)type;
- (void).cxx_destruct;
- (void)setW:;
- (id)status;
- (void)setH:;
- (id)p;
- (id)userid;
- (void)setUserid:;
- (void)setP:;
+ (id)JSONKeyPathsByPropertyKey;
@end
