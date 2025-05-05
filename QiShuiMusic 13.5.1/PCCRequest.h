@interface PCCRequest : NSObject
@property (nonatomic) NSString jid;
@property (nonatomic) NSString event;
@property (nonatomic) NSString type;
@property (nonatomic) @? callback;
@property (nonatomic) NSDictionary options;
- (id)callback;
- (void)setCallback:;
- (id)event;
- (id)options;
- (id)type;
- (void).cxx_destruct;
- (id)description;
- (id)jid;
- (id)initWithMessage:options:;
@end
