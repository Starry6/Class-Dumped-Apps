@interface UITableViewRow : NSObject
@property (nonatomic) double height;
@property (nonatomic) UITableViewCell cell;
- (void)setIndentationLevel:;
- (long long)indentationLevel;
- (id)initWithCoder:;
- (double)height;
- (void)encodeWithCoder:;
- (void)setHeight:;
- (void).cxx_destruct;
- (id)cell;
- (void)setCell:;
+ (id)row;
@end
