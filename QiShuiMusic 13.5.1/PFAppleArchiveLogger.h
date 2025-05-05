@interface PFAppleArchiveLogger : PFAppleArchiveStream
- (BOOL)flush:;
- (id)initWithArchiveURL:;
- (BOOL)encodeBuffer:size:error:;
+ (BOOL)encodeFile:destination:error:;
@end
