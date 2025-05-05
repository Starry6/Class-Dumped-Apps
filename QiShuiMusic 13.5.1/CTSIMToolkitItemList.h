@interface CTSIMToolkitItemList : NSObject
@property (nonatomic) NSArray itemList;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)itemList;
- (void)setItemList:;
+ (BOOL)supportsSecureCoding;
@end
