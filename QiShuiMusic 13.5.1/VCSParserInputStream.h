@interface VCSParserInputStream : NSObject
- (id)initWithData:;
- (void).cxx_destruct;
- (int)lineNum;
- (unsigned long long)getLine:withSize:;
- (unsigned long long)loadLineBuffer;
- (BOOL)isContinued;
- (id)errorStr:;
@end
