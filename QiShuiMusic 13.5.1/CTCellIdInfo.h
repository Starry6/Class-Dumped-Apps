@interface CTCellIdInfo : NSObject
@property (nonatomic) NSNumber cellId;
@property (nonatomic) NSNumber baseId;
- (id)cellId;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)baseId;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)cellIdInfoFromCellId:baseId:;
@end
