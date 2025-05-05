@interface CSJDeriveData : NSObject
@property (nonatomic) CSJDeriveTemplateData templateData;
- (void)setTemplateData:;
- (void)setupDataWithDictionary:;
- (id)templateData;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
@end
