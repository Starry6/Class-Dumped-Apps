@interface WCTSequence : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSInteger seq;
- (void)setName:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (void)setSeq:;
- (int)seq;
+ (id)AllProperties;
+ (id)AnyProperty;
+ (id)PropertyNamed;
+ (id)TableName;
+ (id)objectRelationalMappingForWCDB;
+ (id)name;
+ (id)seq;
@end
