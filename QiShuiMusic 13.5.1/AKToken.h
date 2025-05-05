@interface AKToken : NSObject
@property (nonatomic) NSString stringValue;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSString name;
- (void)setName:;
- (void)setStringValue:;
- (id)expirationDate;
- (id)stringValue;
- (void).cxx_destruct;
- (id)name;
+ (id)tokenWithValue:lifetime:;
+ (id)tokenWithBase64String:;
+ (id)tokenWithDictionary:;
@end
