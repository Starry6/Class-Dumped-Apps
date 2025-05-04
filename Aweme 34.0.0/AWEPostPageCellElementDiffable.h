@interface AWEPostPageCellElementDiffable : NSObject
@property (nonatomic) BOOL isVisible;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL needsUpdate;
@property (nonatomic) <NSObject> diffId;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:;
- (id)diffId;
- (id)initWithCellElement:;
- (void)setDiffId:;
- (void)setNeedsUpdate:;
- (void)setIsEnabled:;
- (BOOL)needsUpdate;
- (void)setIsVisible:;
- (BOOL)isVisible;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (BOOL)isEqual:;
@end
