@interface TTVideoEngineMediaTrackInfoModel : NSObject
@property (nonatomic) q index;
@property (nonatomic) q type;
@property (nonatomic) NSString language;
@property (nonatomic) NSString name;
@property (nonatomic) NSString groupId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setName:;
- (id)toDictionary;
- (void)setLanguage:;
- (id)language;
- (id)initWithDictionary:;
- (void)setType:;
- (long long)index;
- (id)groupId;
- (long long)type;
- (void)setIndex:;
- (void).cxx_destruct;
- (id)name;
- (void)setGroupId:;
@end
