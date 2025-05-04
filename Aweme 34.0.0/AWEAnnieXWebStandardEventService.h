@interface AWEAnnieXWebStandardEventService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onNavigationBarItemClick:extra:;
- (void)onShareCompletion:extra:;
- (void)onContainerCloseWithSchemaParams:extra:;
- (void)onContainerEnter:schemaParams:extra:;
- (void)onPageLoadFinish:schemaParams:extra:;
- (void)onPageLoadFailed:schemaParams:extra:;
- (void)onLongPressTextWithContainer:schemaParams:extra:;
- (void)onLongPressImageWithContainer:schemaParams:extra:;
@end
