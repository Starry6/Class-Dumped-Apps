@interface FFDefaultFileReader : NSObject
- (id)dictionaryWithContentsOfURL:error:;
- (id)contentsOfDirectoryAtURL:error:;
@end
