@interface AWEOpenShareImageSticker : AWEOpenShareBaseSticker
@property (nonatomic) NSNumber maxEdge;
@property (nonatomic) NSNumber minimumScale;
@property (nonatomic) BOOL deleteable;
@property (nonatomic) BOOL editable;
@property (nonatomic) NSString localIdentifier;
- (id)maxEdge;
- (void)setMaxEdge:;
- (BOOL)deleteable;
- (void)setDeleteable:;
- (void)setMinimumScale:;
- (id)minimumScale;
- (id)localIdentifier;
- (void).cxx_destruct;
- (void)setEditable:;
- (BOOL)editable;
- (void)setLocalIdentifier:;
@end
