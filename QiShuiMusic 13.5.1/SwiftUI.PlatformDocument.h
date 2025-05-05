@interface SwiftUI.PlatformDocument : UIDocument
- (void)dealloc;
- (id)initWithFileURL:;
- (void).cxx_destruct;
- (BOOL)readFromURL:error:;
- (id)contentsForType:error:;
@end
