@interface AWECoCreatorTitleCellModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) BOOL hasLine;
@property (nonatomic) BOOL hasTips;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHasLine:;
- (BOOL)hasTips;
- (void)setHasTips:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (BOOL)hasLine;
- (double)cellHeight;
+ (double)cellHeightWithNoLine;
+ (double)cellHeightWithHasLine;
@end
