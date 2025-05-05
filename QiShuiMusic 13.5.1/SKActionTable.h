@interface SKActionTable : NSObject
@property (nonatomic) NSDictionary actionTableDictionary;
@property (nonatomic) NSMutableDictionary _info;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)_info;
- (void)set_info:;
- (id)initWithContentsOfDictionary:;
- (BOOL)isEqualToActionTable:;
- (id)actionForName:;
- (id)actionTableDictionary;
+ (BOOL)supportsSecureCoding;
+ (id)actionTableWithContentsOfDictionary:;
@end
