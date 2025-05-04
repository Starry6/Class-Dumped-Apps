@interface AWEIMMangoShareHeaderInfo : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) UIImage coverImage;
@property (nonatomic) NSString coverURLString;
- (id)coverURLString;
- (id)initWithTitle:subTitle:coverURLString:;
- (id)initWithTitle:subTitle:coverImage:;
- (id)subTitle;
- (id)description;
- (void).cxx_destruct;
- (id)title;
- (id)initWithDictionary:;
- (id)coverImage;
@end
