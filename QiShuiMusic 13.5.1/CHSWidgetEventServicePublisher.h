@interface CHSWidgetEventServicePublisher : NSObject
@property (nonatomic) BOOL active;
- (void)_invalidateConnection;
- (id)_activeConnection;
- (void)dealloc;
- (void)deactivate;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMachServiceName:;
- (BOOL)isActive;
- (void)activate;
- (void)publishOpenEventWithURL:;
- (void)publishOpenEventWithUserActivity:;
@end
