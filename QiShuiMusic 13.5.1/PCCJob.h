@interface PCCJob : NSObject
@property (nonatomic) NSString jid;
@property (nonatomic) NSString target;
@property (nonatomic) NSDictionary options;
@property (nonatomic) NSString nextFilepath;
@property (nonatomic) NSDictionary metadata;
@property (nonatomic) @ result;
@property (nonatomic) NSDate lastTouch;
@property (nonatomic) NSString type;
@property (nonatomic) NSString event;
- (id)result;
- (id)event;
- (id)metadata;
- (id)options;
- (id)type;
- (void).cxx_destruct;
- (id)target;
- (id)description;
- (id)lastTouch;
- (id)nextFilepath;
- (id)initWithID:forTarget:options:;
- (id)initWithID:forTarget:options:forFile:;
- (void)packageLog:forRouting:info:options:;
- (void)registerResult:error:;
- (id)jid;
@end
