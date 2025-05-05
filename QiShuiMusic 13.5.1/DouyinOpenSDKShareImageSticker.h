@interface DouyinOpenSDKShareImageSticker : NSObject
@property (nonatomic) NSNumber locationX;
@property (nonatomic) NSNumber locationY;
@property (nonatomic) NSNumber maxEdge;
@property (nonatomic) NSNumber minimumScale;
@property (nonatomic) BOOL deleteable;
@property (nonatomic) BOOL editable;
@property (nonatomic) NSString localIdentifier;
- (id)maxEdge;
- (BOOL)deleteable;
- (id)locationX;
- (id)locationY;
- (void)setDeleteable:;
- (void)setLocationX:;
- (void)setLocationY:;
- (void)setMaxEdge:;
- (id)init;
- (id)localIdentifier;
- (id)minimumScale;
- (void).cxx_destruct;
- (void)setMinimumScale:;
- (void)setEditable:;
- (BOOL)editable;
- (void)setLocalIdentifier:;
@end
