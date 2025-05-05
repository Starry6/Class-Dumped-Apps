@interface BDEnumTypeWrapper : NSObject
@property (nonatomic) q enumValue;
- (id)__init:;
- (long long)enumValue;
+ (id)wrapperWithEnumType:;
@end
