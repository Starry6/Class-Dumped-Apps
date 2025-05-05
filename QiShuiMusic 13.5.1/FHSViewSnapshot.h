@interface FHSViewSnapshot : NSObject
@property (nonatomic) FHSView view;
@property (nonatomic) NSString title;
@property (nonatomic) BOOL important;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) BOOL hidden;
@property (nonatomic) UIImage snapshotImage;
@property (nonatomic) NSArray children;
@property (nonatomic) NSString summary;
@property (nonatomic) UIColor headerColor;
- (id)initWithView:children:;
- (id)headerColor;
- (id)snapshotForView:;
- (id)view;
- (id)title;
- (BOOL)important;
- (void)setImportant:;
- (id)frame;
- (BOOL)hidden;
- (id)snapshotImage;
- (id)children;
- (id)summary;
- (void).cxx_destruct;
+ (id)snapshotWithView:;
@end
