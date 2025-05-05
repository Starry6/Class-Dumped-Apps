@interface TwoNetsStyleTransfer : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)load:outputName:;
- (int)widthSmall;
- (int)widthBig;
- (int)heightSmall;
- (int)heightBig;
- (id)executeSyncWithImage:smallImage:;
+ (BOOL)supportsANE;
@end
