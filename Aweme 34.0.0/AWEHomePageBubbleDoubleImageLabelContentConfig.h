@interface AWEHomePageBubbleDoubleImageLabelContentConfig : NSObject
@property (nonatomic) NSString text;
@property (nonatomic) UIImage firstImage;
@property (nonatomic) UIImage secondImage;
@property (nonatomic) NSArray firstImageURLList;
@property (nonatomic) NSArray secondImageURLList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithText:firstImageURLList:secondImageURLList:;
- (id)initWithText:firstImage:secondImage:;
- (id)firstImage;
- (id)secondImage;
- (id)firstImageURLList;
- (id)secondImageURLList;
- (id)contentType;
- (id)text;
- (BOOL)isValid;
- (void).cxx_destruct;
@end
