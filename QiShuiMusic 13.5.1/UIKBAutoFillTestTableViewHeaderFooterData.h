@interface UIKBAutoFillTestTableViewHeaderFooterData : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) UIView headerFooterView;
@property (nonatomic) double height;
- (id)initWithCoder:;
- (double)height;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)initWithTitle:view:height:;
- (id)headerFooterView;
@end
