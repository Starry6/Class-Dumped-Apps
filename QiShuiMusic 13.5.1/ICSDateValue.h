@interface ICSDateValue : NSObject
@property (nonatomic) q year;
@property (nonatomic) q month;
@property (nonatomic) q day;
- (long long)day;
- (long long)month;
- (long long)year;
- (id)components;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)_ICSStringWithOptions:appendingToString:;
- (long long)compare:;
- (id)description;
- (BOOL)isEqual:;
- (int)dateType;
- (id)initWithYear:month:day:;
- (id)icsString;
+ (BOOL)supportsSecureCoding;
+ (id)dateFromICSString:;
+ (id)dateFromICSUTF8String:;
@end
