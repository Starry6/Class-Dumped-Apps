@interface ZolozSimpleValueContent : NSObject
@property (nonatomic) NSString simpleValue;
@property (nonatomic) Q length;
@property (nonatomic) NSString simpleOutValue;
@property (nonatomic) NSString simpleEnValue;
- (void)setSimpleValue:;
- (void)setSimpleEnValue:;
- (void)setSimpleOutValue:;
- (id)simpleEnValue;
- (id)simpleOutValue;
- (id)simpleValue;
- (void).cxx_destruct;
- (unsigned long long)length;
- (void)setLength:;
+ (id)sharedInstance;
@end
