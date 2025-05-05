@interface IAVDViewElement : NSObject
@property (nonatomic) IAVDElementLabel label;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) ^{CGImage=} snapshotImage;
@property (nonatomic) NSArray children;
@property (nonatomic) NSString shortDescription;
@property (nonatomic) NSString description;
- (id)snapshotImage;
- (id)initWithView:;
- (id)init;
- (id)shortDescription;
- (id)children;
- (id)label;
- (id)frame;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isHidden;
@end
