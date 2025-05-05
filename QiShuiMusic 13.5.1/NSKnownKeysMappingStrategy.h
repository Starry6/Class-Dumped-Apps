@interface NSKnownKeysMappingStrategy : NSObject
@property (nonatomic) Q length;
@property (nonatomic) ^@ keys;
- (unsigned long long)indexForKey:;
- (id)keys;
- (id)initForKeys:count:;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)fastIndexForKnownKey:;
- (unsigned long long)length;
- (id)initForKeys:;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)alloc;
+ (BOOL)supportsSecureCoding;
@end
