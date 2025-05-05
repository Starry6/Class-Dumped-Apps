@interface PLContentChanges : NSObject
@property (nonatomic) NSMutableArray container;
@property (nonatomic) NSMutableArray updatedContent;
- (void)setContainer:;
- (id)container;
- (id)updatedContent;
- (void).cxx_destruct;
- (void)cleanupState;
- (void)setUpdatedContent:;
@end
