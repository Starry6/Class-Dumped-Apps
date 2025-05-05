@interface ICURLBagMescalConfiguration : NSObject
@property (nonatomic) BOOL shouldSignBody;
@property (nonatomic) NSArray fields;
@property (nonatomic) NSArray headers;
- (void)setFields:;
- (void)setHeaders:;
- (id)fields;
- (void).cxx_destruct;
- (id)description;
- (id)headers;
- (BOOL)shouldSignBody;
- (void)setShouldSignBody:;
@end
