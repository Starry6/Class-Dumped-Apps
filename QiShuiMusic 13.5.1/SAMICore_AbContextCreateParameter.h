@interface SAMICore_AbContextCreateParameter : NSObject
@property (nonatomic) ^? getString;
@property (nonatomic) ^? getInt;
@property (nonatomic) ^? getBool;
@property (nonatomic) ^? getFloat;
@property (nonatomic) ^? getAbConfig;
- (void)setGetAbConfig:;
- (id)getAbConfig;
- (void)setGetBool:;
- (void)setGetFloat:;
- (void)setGetInt:;
- (void)setGetString:;
- (id)getBool;
- (id)getFloat;
- (id)getString;
- (id)getInt;
@end
