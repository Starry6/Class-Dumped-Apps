@interface SDLegalDoc : NSObject
@property (nonatomic) q legal_id;
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
- (id)content;
- (void)setContent:;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)initWithID:title:content:;
- (long long)legal_id;
- (void)setLegal_id:;
+ (BOOL)supportsSecureCoding;
+ (id)legalDocWithID:title:content:;
@end
