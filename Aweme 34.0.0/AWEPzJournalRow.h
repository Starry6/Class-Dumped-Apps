@interface AWEPzJournalRow : NSObject
@property (nonatomic) NSInteger identifier;
@property (nonatomic) NSString componentID;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString componentType;
@property (nonatomic) NSDate timeOfShow;
@property (nonatomic) NSDate timeOfHide;
@property (nonatomic) BOOL consume;
@property (nonatomic) NSSet sTags;
@property (nonatomic) NSSet cTags;
@property (nonatomic) q lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
- (id)secUid;
- (id)cTags;
- (id)sTags;
- (void)setSecUid:;
- (void)setSTags:;
- (void)setCTags:;
- (id)timeOfShow;
- (id)timeOfHide;
- (void)setLastInsertedRowID:;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:;
- (void)setConsume:;
- (void)setTimeOfShow:;
- (void)setTimeOfHide:;
- (id)initWithID:type:secUid:;
- (long long)lastInsertedRowID;
- (void)setIdentifier:;
- (id)componentType;
- (int)identifier;
- (BOOL)consume;
- (id)description;
- (void)setComponentType:;
- (void).cxx_destruct;
- (void)setComponentID:;
- (id)componentID;
+ (id)secUid;
+ (id)timeOfShow;
+ (id)timeOfHide;
+ (id)objectRelationalMappingForWCDB;
+ (id)AllProperties;
+ (id)AnyProperty;
+ (id)PropertyNamed;
+ (id)componentType;
+ (id)identifier;
+ (id)consume;
+ (id)componentID;
@end
