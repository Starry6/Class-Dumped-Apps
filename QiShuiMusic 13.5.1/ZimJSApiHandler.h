@interface ZimJSApiHandler : NSObject
- (id)getMetaInfo;
- (void)handler:contextInfo:callback:;
- (void)startStandardVerifywithZimID:pramas:callback:;
@end
