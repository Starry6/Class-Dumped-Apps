@interface AWEDanmakuInputModel : MTLModel
@property (nonatomic) NSString text;
@property (nonatomic) NSString itemID;
@property (nonatomic) q offsetTimeMS;
@property (nonatomic) q inputOffsetTimeMS;
@property (nonatomic) Q danmakuTypeBits;
@property (nonatomic) NSString replyDanmakuID;
@property (nonatomic) NSMutableDictionary extraParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtraParams:;
- (id)extraParams;
- (unsigned long long)danmakuTypeBits;
- (id)replyDanmakuID;
- (long long)offsetTimeMS;
- (long long)inputOffsetTimeMS;
- (id)itemID;
- (id)text;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
