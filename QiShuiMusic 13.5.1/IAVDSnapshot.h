@interface IAVDSnapshot : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) IAVDElementLabel label;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) ^{CGImage=} snapshotImage;
@property (nonatomic) NSArray children;
@property (nonatomic) <IAVDElement> element;
- (id)element;
- (id)snapshotImage;
- (id)init;
- (id)identifier;
- (id)children;
- (id)label;
- (id)frame;
- (void).cxx_destruct;
- (BOOL)isHidden;
- (id)initWithElement:;
@end
