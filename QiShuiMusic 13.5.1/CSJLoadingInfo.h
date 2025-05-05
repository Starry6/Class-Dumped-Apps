@interface CSJLoadingInfo : NSObject
@property (nonatomic) q if_playable_loading_show;
@property (nonatomic) q remove_loading_page_type;
@property (nonatomic) q playable_loading_style;
@property (nonatomic) NSString playable_loading_img_url;
@property (nonatomic) NSString playable_loading_icon_url;
@property (nonatomic) NSString playable_loading_tips;
- (long long)if_playable_loading_show;
- (id)playable_loading_icon_url;
- (id)playable_loading_img_url;
- (long long)playable_loading_style;
- (id)playable_loading_tips;
- (long long)remove_loading_page_type;
- (void)setIf_playable_loading_show:;
- (void)setPlayable_loading_icon_url:;
- (void)setPlayable_loading_img_url:;
- (void)setPlayable_loading_style:;
- (void)setPlayable_loading_tips:;
- (void)setRemove_loading_page_type:;
- (id)initWithDictionary:error:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
@end
