@interface GEODefaultsDBValue : NSObject
@property (nonatomic) GEODefaultsDBCollection parent;
@property (nonatomic) q dbId;
@property (nonatomic) NSString type;
@property (nonatomic) @ value;
- (void)setType:;
- (id)initWithParent:type:value:;
- (void)setValue:;
- (id)type;
- (void)setDbId:;
- (void).cxx_destruct;
- (long long)dbId;
- (id)value;
- (id)parent;
+ (id)dbValue:type:value:;
@end
