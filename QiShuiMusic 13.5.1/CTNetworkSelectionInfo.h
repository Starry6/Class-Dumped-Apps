@interface CTNetworkSelectionInfo : NSObject
@property (nonatomic) Q selectionState;
@property (nonatomic) Q selectionMode;
@property (nonatomic) CTNetwork selection;
- (void)setSelection:;
- (id)selection;
- (unsigned long long)selectionState;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setSelectionState:;
- (id)description;
- (id)copyWithZone:;
- (unsigned long long)selectionMode;
- (void)setSelectionMode:;
+ (BOOL)supportsSecureCoding;
@end
