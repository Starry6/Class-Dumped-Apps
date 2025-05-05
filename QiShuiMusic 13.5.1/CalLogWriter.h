@interface CalLogWriter : NSObject
@property (nonatomic) <CalLogFormatter> formatter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)write:;
- (id)init;
- (id)initWithParameters:;
- (id)formatter;
- (BOOL)flush;
- (void).cxx_destruct;
- (id)description;
- (void)setFormatter:;
@end
