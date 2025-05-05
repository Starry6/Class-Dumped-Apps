@interface WBSuperGroupObject : NSObject
@property (nonatomic) NSString superGroup;
@property (nonatomic) NSString section;
@property (nonatomic) NSDictionary extData;
- (id)extData;
- (void)setExtData:;
- (void)setSuperGroup:;
- (id)superGroup;
- (id)validate;
- (void)setSection:;
- (void).cxx_destruct;
- (id)section;
+ (id)dictionaryWithSuperTopicObject:;
+ (id)superGroupObjectWithDictionary:;
+ (id)object;
@end
